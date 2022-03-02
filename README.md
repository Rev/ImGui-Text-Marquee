# ImGui-Marquee-Text
An easy way to make a text marquee using ImGui.

I used ImGui::GetFrameCount() to check the amount of frames the ImGui menu has rendered. Every 30 frames it will move the text automatically, in-turn creating a "marquee". I personally think it makes your mobile mod menus look quite good :)

If you don't want to use ImGui::GetFrameCount(), you can also use an engine-based function, such as get_time (UnityEngine.Time) for Unity-based games. But, I wanted something that was universal for all games, hence why I'm using ImGui::GetFrameCount() instead.

I've shown an example of what it looks like in an application below (look at the bottom of the screen). Other than that, have fun!

https://user-images.githubusercontent.com/64957743/156343256-480fc2b7-69fd-49e1-9b05-de235f436d56.mp4
