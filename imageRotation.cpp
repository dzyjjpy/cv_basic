//
// Created by jiapy on 19-8-12.
//

#include "ImageRotation.h"
#include <string.h>
#include <cstdlib>

/*
Function：　RotationRight90Degree　顺时针旋转图像90度
  @para　src: src image pointer
  @para  srcW: src image's width
  @para  srcH: src image's height
  @para  channel: src image's channel; e.g. RGB:3, RGBA:4, GRAY:1
  PS: 图像旋转后，宽和高将进行对调，显示时需要注意！！！
*/
void RotationRight90Degree(unsigned char* src, int srcW, int srcH, int channel)
{
    unsigned char* temSrc = NULL;
    int mSize = srcW * srcH * channel * sizeof(unsigned char);
    int i = 0;
    int j = 0;
    int k = 0;
    int desW = srcH;
    int desH = srcW;

    temSrc = (unsigned char*)malloc(mSize);
    memcpy(temSrc, src, mSize);

    for(i=0; i<desH; i++)
    {
        for(j=0; j<desW; j++)
        {
            for(k=0; k<channel; k++)
            {
                src[(i*desH + j)*channel + k] = temSrc[( (srcH-1-j)*srcW + i) * channel + k];  // 核心关键，画图确认
            }
        }
    }
    free(temSrc);
}

/*
Function：　RotationLeft90Degree　逆时针旋转图像90度
  @para　src: src image pointer
  @para  srcW: src image's width
  @para  srcH: src image's height
  @para  channel: src image's channel; e.g. RGB:3, RGBA:4, GRAY:1
  PS: 图像旋转后，宽和高将进行对调，显示时需要注意！！！
*/
void RotationLeft90Degree(unsigned char* src, int srcW, int srcH, int channel)
{
    unsigned char* temSrc = NULL;
    int mSize = srcW * srcH * channel * sizeof(unsigned char);
    int i = 0;
    int j = 0;
    int k = 0;
    int desW = srcH;
    int desH = srcW;

    temSrc = (unsigned char*)malloc(mSize);
    memcpy(temSrc, src, mSize);

    for(i=0; i<desH; i++)
    {
        for(j=0; j<desW; j++)
        {
            for(k=0; k<channel; k++)
            {
                src[(i*desH + j)*channel + k] = temSrc[(i*srcW + (srcW-1-j)) * channel + k];  // 核心关键，画图确认
            }
        }
    }
    free(temSrc);
}

/*
Function：　Rotation180Degree　旋转图像180度
  @para　src: src image pointer
  @para  srcW: src image's width
  @para  srcH: src image's height
  @para  channel: src image's channel; e.g. RGB:3, RGBA:4, GRAY:1
*/
void Rotation180Degree(unsigned char* src, int srcW, int srcH, int channel)
{

}

void FlipImageHorizontal(unsigned char*src, int Width, int Height, int channel)
{

}
