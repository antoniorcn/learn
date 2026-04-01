import { Text, View } from 'react-native';

const Teste = () => {
    const pos = {x: 100, y: 100};
    const angles = {start: 180, end: 360};
    const angleGap = angles.end - angles.start;
    const texto = "Antonio Rodrigues Carvalho";
    const radius = 100;
    const letras = texto.split("");
    const angleLetrasGap = angleGap / letras.length;
    const lista = [];
    let log = "";

    for (let i = 0; i < texto.length; i++) {
        const angle = angles.start + (i * angleLetrasGap);
        const angleRad = angle / 180 * Math.PI;
        const x = pos.x + (radius * Math.cos(angleRad));
        const y = pos.y + (radius * Math.sin(angleRad));
        const textAngle = 90 + angle;
        const letra = letras[i];
        log += `Angle: ${angle}  X: ${x}  Y: ${y}`;
        lista.push(
            <Text style={{
                fontSize: 12,
                position: "absolute",
                transform: [{translateX: x}, {translateY: y}, {rotateZ: textAngle.toString() + "deg"}],
            }}>{letra}</Text>
        )
    }

    return (
        <View style={{flex: 1}}>
            {lista}
            <Text style={{ fontSize: 48, position: "absolute",
                // left: 150, top: 300,
                // transformOrigin: "30deg",
                transform: [{translateX: 150}, {translateY: 300}, {rotateZ: "0deg"}],
                
            }}>A</Text>
        </View>
    );
}

export default Teste;