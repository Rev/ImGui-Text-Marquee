//
//  Rendering.h
//
//  Created by Rev on 2/03/2022.
//

#include "../ImGui/imgui_internal.h"

namespace Rendering {

    void DrawText2(float fontSize, ImVec2 position, ImVec4 color, const char *text)
    {
        auto background = ImGui::GetBackgroundDrawList();
        if(background)
        {
            background->AddText(NULL, fontSize, position, ImColor(color.x,color.y,color.z,color.w), text);
        }
    }

}
