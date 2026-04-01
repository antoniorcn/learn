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

export default function CurvedAndCircularProgress({
  size,
  strokeWidth,
  progress,
  value,
  subtitle,
  text,
  angles
}: Props) {

    const [layout, setLayout] = useState<LayoutRectangle>({x: 0, y: 0, width: 0, height: 0});

    const onLayout = ( ev : LayoutChangeEvent ) => { 
        setLayout(ev.nativeEvent.layout);
        console.log("Layout: ", layout);
    }
    return (
        <>
            <CurvedText texto={text} raio={{x: layout.width*3, y:layout.height*3}} 
                pos={{x: layout.x + layout.width / 2, y: layout.y + layout.height / 2}} angles={angles}/>
            <CircularProgress
                onLayout={onLayout}
                size={size}
                strokeWidth={strokeWidth}
                progress={progress}
                value={value}
                subtitle={subtitle}
            />
        </>
    );

}