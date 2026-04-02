import React, { useState } from "react";
import CircularProgress from "./CircularProgress";
import CurvedText from "./CurvedText";
import { LayoutChangeEvent, LayoutRectangle } from "react-native";

type Props = {
  size: number;
  strokeWidth: number;
  progress: number;
  value: string;
  subtitle: string;
  text : string;
  angles : {start: number, end: number};
};

// export default function CurvedTextAndCircularProgress({
//   size,
//   strokeWidth,
//   progress,
//   value,
//   subtitle,
//   text,
//   angles
// }: Props) {

//     const x = size / 2
//     const y = size / 2
//     return (
//         <>
//             <CurvedText texto={text} raio={{x: size, y:size}} 
//                 pos={{x: x, y: y}} angles={angles}/>
//             <CircularProgress
//                 size={size}
//                 strokeWidth={strokeWidth}
//                 progress={progress}
//                 value={value}
//                 subtitle={subtitle}
//             />
//         </>
//     );

// }