import java.awt.image.BufferedImage;
import java.awt.print.*;
import java.awt.*;
import java.io.File;
import java.io.IOException;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

import javax.imageio.ImageIO;
import javax.print.PrintService;
import javax.print.attribute.Attribute;
import javax.print.attribute.PrintServiceAttributeSet;

enum PrinterFont {
    SMALL("ARIAL", Font.PLAIN, 12),
    MEDIUM("ARIAL", Font.PLAIN, 16),
    LARGE("ARIAL", Font.PLAIN, 24);

    private final String fontName;
    private final int fontModifier;
    private final int fontSize;

    private Font font = null;

    PrinterFont( String fontName, int fontModifier, int fontSize ) {
        this.fontName = fontName;
        this.fontModifier = fontModifier;
        this.fontSize = fontSize;
        this.font = new Font(fontName, fontModifier,fontSize);
    }

    public int getSize() {
        return this.fontSize;
    }

    public int getModifier() {
        return this.fontModifier;
    }

    public String getFontName() {
        return this.fontName;
    }

    public Font getFont() {
        return this.font;
    }
}


public class PrintTeste implements Printable { 
    public static final String PRINTER_NAME = "PERTO Printer TEC";
    // public static final String PRINTER_NAME = "Microsoft Print to PDF";
    public static final int Y_INICIO = 5;
    public static final int Y_GAP = 2;

    public static final int WIDTH = 300;
    public static final int HEIGHT = 600;

    private BufferedImage logo;

    private int posY = Y_INICIO;

    public PrintTeste() {
        try {
            File pathToFile = new File("D:\\git\\arcarini\\totem-vendas\\src\\main\\resources\\images\\hamburguer.png");
            this.logo = ImageIO.read(pathToFile);
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public PrintService findPrintService(String printerName) {
        for (PrintService service : PrinterJob.lookupPrintServices()) {
            if (service.getName().equalsIgnoreCase(printerName)) {
                  return service;
            }
        }
        return null;
    }

    @Override
    public int print(Graphics g, PageFormat pf, int pageIndex) { 
        if (pageIndex > 0) { 
            return Printable.NO_SUCH_PAGE;
        }
        this.posY = PrintTeste.Y_INICIO;
        System.out.printf("Position Y: %d %n", this.posY);
        System.out.printf("PageFormat getHeight: %6.2f %n", pf.getHeight() );
        System.out.printf("PageFormat getImageableHeight: %6.2f %n", pf.getImageableHeight() );
        System.out.printf("PageFormat getImageableY: %6.2f %n", pf.getImageableY() );
        System.out.printf("PageFormat getWidth: %6.2f %n", pf.getWidth() );
        System.out.printf("PageFormat getImageableWidth: %6.2f %n", pf.getImageableWidth() );
        System.out.printf("PageFormat getImageableX: %6.2f %n", pf.getImageableX() );
        System.out.printf("PageIndex: %d %n", pageIndex);
        Graphics2D g2d = (Graphics2D)g;
        g2d.translate(pf.getImageableX(), pf.getImageableY());

        LocalDateTime data = LocalDateTime.now();
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy hh:mm:ss");
        String strtime = dtf.format(data);
        printImage(g2d, this.logo, 10, 100, 100);
        g2d.setColor(Color.BLACK);
        writeText(g2d,"-----------------------------------------------", PrinterFont.SMALL, 0);
        writeText(g2d,"Arcarini Sistemas", PrinterFont.SMALL, 10);
        writeText(g2d,"Av. Nova, 156 cj. 82-A", PrinterFont.SMALL, 10);
        writeText(g2d,"Taboao da Serra - SP", PrinterFont.SMALL, 10);
        writeText(g2d,"-----------------------------------------------", PrinterFont.SMALL, 5);
        writeText(g2d," Lanchonete Pag Cafe", PrinterFont.MEDIUM, 10);
        writeText(g2d," Data/Hora:" + strtime, PrinterFont.SMALL, 10);
        writeText(g2d," -----------------------------------------------", PrinterFont.SMALL, 5);
        writeText(g2d,"Pedido No:", PrinterFont.SMALL, 10);
        writeText(g2d,"123456", PrinterFont.LARGE, 70);
        writeText(g2d,"Items do pedido:", PrinterFont.SMALL, 10);
        writeText(g2d,"1un - Hamburguer com Queijo", PrinterFont.SMALL, 15);
        writeText(g2d,"1un - Refrigerante Lata", PrinterFont.SMALL, 15);
        writeText(g2d,"1un - Batinha media", PrinterFont.SMALL, 15);
        writeText(g2d,"Total pago........: R$ 10,50", PrinterFont.SMALL, 15);
        writeText(g2d,"Meio de pagamento.: Credito", PrinterFont.SMALL, 10);
        writeText(g2d,"------------------------------------------------", PrinterFont.SMALL, 5);
        writeText(g2d,"Desenvolvido por:", PrinterFont.SMALL, 10);
        writeText(g2d,"Antonio Carvalho", PrinterFont.SMALL, 10);
        writeText(g2d,"Data e Hora:" + strtime, PrinterFont.SMALL, 10);
        return Printable.PAGE_EXISTS;
    }
    

    public void writeText(Graphics g, String text, PrinterFont font,  int posX ) {
        FontMetrics metrics = g.getFontMetrics(font.getFont());
        int lineHeight = metrics.getHeight();
        g.setFont(font.getFont());
        g.drawString( text, posX, this.posY);
        this.posY += lineHeight + Y_GAP;
    }

    public void printImage(Graphics g, BufferedImage img, int posX, int width, int height ) {
        Image scaled = img.getScaledInstance(width, height, Image.SCALE_FAST);
        g.drawImage(scaled, posX, this.posY, null);
        this.posY += (scaled.getHeight(null) + (Y_GAP * 2));
    }

    public void drawLine(Graphics g, int x1, int x2) {
        g.drawLine(x1, this.posY + Y_GAP, x2, this.posY + Y_GAP);
    }

    public static void main(String args[]) throws PrinterException{ 
        PrintTeste pt = new PrintTeste();
        PrintService ps = pt.findPrintService(PRINTER_NAME);
        // PrinterJob job = PrinterJob.getPrinterJob();
        //set the printService found (should be tested)
        try {
            PrinterJob job = PrinterJob.getPrinterJob();
            PageFormat pf = job.defaultPage();
            //Get the default PageFormat
            // Paper copy = pf.getPaper();
            // copy.setSize(copy.getWidth(), copy.getHeight());
            // copy.setImageableArea(copy.getImageableX(), copy.getImageableY(), copy.getImageableWidth(), copy.getImageableHeight());
            // pf.setPaper(copy);
            
            // if (job.printDialog()) {
            job.setPrintable(pt, pf);
            job.setPrintService(ps);
            job.print();
            // PrintServiceAttributeSet attrs = job.getPrintService().getAttributes();
            // System.out.println(attrs.toString());
            // Attribute[] attrArray = attrs.toArray();            
            // for (Attribute a : attrArray) { 
            //     System.out.printf("Chave: %s Valor: %s %n", a.getName(), a.getClass());
            // }

            
            // job.setPrintable( pt );
            // job.print();
            // }
        } catch(PrinterException e) { 
            e.printStackTrace();
        }
    }
}