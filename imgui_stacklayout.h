// dear imgui, v1.86 WIP
// (stack layout headers)

/*

Index of this file:
// [SECTION] Stack Layout API

*/

#pragma once

#include "imgui.h"

#ifndef IMGUI_DISABLE

//-----------------------------------------------------------------------------
// [SECTION] Stack Layout API
//-----------------------------------------------------------------------------

namespace ImGui
{
    IMGUI_API void CreateStackLayoutStates();
    IMGUI_API void DestroyStackLayoutStates();
    IMGUI_API void BeginHorizontal(ImStrv str_id, const ImVec2& size = ImVec2(0, 0), float align = -1.0f);
    IMGUI_API void BeginHorizontal(ImGuiID id, const ImVec2& size = ImVec2(0, 0), float align = -1);
    IMGUI_API void EndHorizontal();
    IMGUI_API void BeginVertical(ImStrv str_id, const ImVec2& size = ImVec2(0, 0), float align = -1.0f);
    IMGUI_API void BeginVertical(ImGuiID id, const ImVec2& size = ImVec2(0, 0), float align = -1);
    IMGUI_API void EndVertical();
    IMGUI_API void Spring(float weight = 1.0f, float spacing = -1.0f);
    IMGUI_API void SuspendLayout();
    IMGUI_API void ResumeLayout();

} // namespace ImGui


#endif // #ifndef IMGUI_DISABLE
