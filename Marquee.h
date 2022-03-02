//
//  Marquee.h
//
//  Created by Rev on 2/03/2022.
//

#include "Rendering.h"

void Render() //Don't forget to call this somewhere! Such as, where you're calling the menu.
{

    static float isAutoSlider = -0.20; //Where the text will first start on the screens width.

    Rendering::DrawText2(Display_get_height(Display_get_main()) * 0.021, ImVec2(Display_get_width(Display_get_main()) * isAutoSlider, Display_get_height(Display_get_main()) * 0.9725), ImVec4(1, 1, 1, 1), OBFUSCATE("Developed by Rev - Powered by Polarmods.com"));

    //We call our text here because the use of "isFrames % 30 == 0" is constantly changing, and will make our text disappear quickly.
    //If we put it up here though, it'll work fine, because it's not in an if statement where everything is changing.
    //The static float variable we have above will update with "isAutoSlider += 0.01;".
    //I hope that makes sense!

    if(isAutoSlider)
    {

        auto isFrames = ImGui::GetFrameCount();

        if(isFrames % 30 == 0) //We divide the current frames by 30, and if the remainder equals 0, then we continue. Our text gets called every 30 frames.
        {

            if(isAutoSlider > 1) //1 = The max screen width.
            {
                isAutoSlider = -0.20; //We use -0.20, because that makes the intro of the text look "seamless".
            }

            isAutoSlider += 0.01; //How much we move the text per 30 frames. By altering this, and the amount of frames, you can make this quite smooth.

        }

    }

}
