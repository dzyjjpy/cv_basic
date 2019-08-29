//
// Created by jiapy on 19-8-12.
//

#ifndef ANDROID_IMAGEROTATION_H
#define ANDROID_IMAGEROTATION_H

#endif //ANDROID_IMAGEROTATION_H
/*
Function：　RotationRight90Degree　顺时针旋转图像90度
  @para　src: src image pointer
  @para  srcW: src image's width
  @para  srcH: src image's height
  @para  channel: src image's channel; e.g. RGB:3, RGBA:4, GRAY:1
  PS: 图像旋转后，宽和高将进行对调，显示时需要注意！！！
*/
void RotationRight90Degree(unsigned char* src, int srcW, int srcH, int channel);

/*
Function：　RotationLeft90Degree　逆时针旋转图像90度
  @para　src: src image pointer
  @para  srcW: src image's width
  @para  srcH: src image's height
  @para  channel: src image's channel; e.g. RGB:3, RGBA:4, GRAY:1
  PS: 图像旋转后，宽和高将进行对调，显示时需要注意！！！
*/
void RotationLeft90Degree(unsigned char* src, int srcW, int srcH, int channel);

/*
Function：　Rotation180Degree　旋转图像180度
  @para　src: src image pointer
  @para  srcW: src image's width
  @para  srcH: src image's height
  @para  channel: src image's channel; e.g. RGB:3, RGBA:4, GRAY:1
*/
void Rotation180Degree(unsigned char* src, int srcW, int srcH, int channel);


/*
Function：　FlipImageHorizontal　对图像进行水平镜像操作（导购机图像是左右镜像的）
  @para　src: src image pointer
  @para  Width: src image's width
  @para  Height: src image's height
*/
void FlipImageHorizontal(unsigned char*src, int Width, int Height, int Channel);