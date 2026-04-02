import React from 'react';
import { Text, View } from 'react-native';

interface CurvedTextProps { 
    texto : string;
    raio : {x: number, y: number};
    pos : {x: number, y: number};
    angles : {start: number, end: number};
}

// const CurvedSvgText : React.FC<CurvedSvgTextProps> = ( { texto } ) => {
//   return (
//     <Svg width={220} height={120}>
//       <Defs>
//         <Path
//           id="curve"
//           d="M 30 90 A 80 80 0 0 1 100 90"
//         />
//       </Defs>

//       <Text fill="#333" fontSize="16" fontWeight="500">
//         <TextPath href="#curve" startOffset="50%" textAnchor="start">
//           {texto}
//         </TextPath>
//       </Text>
//     </Svg>
//   );
// }

const CurvedText : React.FC<CurvedTextProps> = ( { texto, raio, pos, angles } ) => {
    const caracteres = texto.split("");
    const listOfTexts = [];
    const angleGap = angles.end - angles.start;
    const charGap = angleGap / caracteres.length;
    for (let i = 0; i < caracteres.length; i++) {
        const char = caracteres[i];
        const angle = angles.start + (i * charGap);
        const angleRad = angle * (Math.PI / 180);
        const strAngle = (90 + angle).toString() + "deg";
        const x = pos.x + (raio.x * Math.cos(angleRad));
        const y = pos.y + (raio.y * Math.sin(angleRad));
        console.log(`Char: ${char}, Angle: ${angle}, X: ${x}, Y: ${y}`);
    listOfTexts.push(<Text id={`letter-${i}`} 
        style={{
            left : x, top: y,
            transform: [
                {translateX: x}, {translateY: y},
                { rotate: strAngle }, 
            
        ], position: "absolute"}}>{char}</Text>);
    }
    return (
        <View style={{flexDirection: 'row', flexWrap: 'wrap', 
        width: 200, height: 100, justifyContent: 'center', alignItems: 'center'}}>
            {listOfTexts}  
        </View>
    );
}

export default CurvedText; 