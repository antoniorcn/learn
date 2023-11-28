from http.server import HTTPServer, BaseHTTPRequestHandler 

class myRequestHandler(BaseHTTPRequestHandler): 
    def do_GET(self): 
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers( ) 
        self.wfile.write(b"<html><body>") 
        self.wfile.write(b"<b>Hello</b>") 
        self.wfile.write(b"</html></body>")

myServer = HTTPServer(('', 80), myRequestHandler) 
for lp in range(5): 
    myServer.handle_request() 
