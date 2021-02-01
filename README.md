# EGR309_ProjectFinal_SC_NTMouse
DDL: June 2th, 2020

【说明】：

EGR309的期末项目，分享供参考。命名NT，指这个项目很脑瘫。原要求控制伺服舵机点击屏幕玩跳一跳。因为想折腾我做了个通过继电器控制鼠标的方案，实际效果一般，原因是继电器对于精细的时间把控效果不佳，用三极管效果应该会好很多。也就看个乐。

有一说一这个题目也很脑瘫，并且打分方式也很脑瘫，跳一跳1000分折算100分，无力吐槽。学单片机建议做更实用的事，这种事不如去学Java。

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

【程序】是程序本体，可供参考

【效果】是实际实现的效果，看个乐

【硬件】万用板堆锡，没有原理图，看个乐

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

原项目要求：

1.工具：arduino开发板，伺服舵机（控制触控笔起落），手机（运行游戏“跳一跳”），尺子（测量屏幕）

2.目标：通过找到屏幕上的实际距离和按压时间的关系，写出一个能让舵机精确按压屏幕的程序，辅助跳一跳游戏

3.评分标准：跳一跳达到1000分为满分，直接折算成百分制

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

我改动的操作：

1.原项目用面包板，这里我使用万用板

2.原项目要求使用触控笔+手机+尺子（或把尺子替换成电脑投屏+像素测量），我改为了继电器+鼠标+电脑模拟器+像素测量（不推荐）

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

MIT License

Copyright (c) 2021 IlllIlIlIIlIl

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
