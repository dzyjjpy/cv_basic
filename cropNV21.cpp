/*
Function: cropNV21
Description: 根据给出点(x,y), width, height从NV21图像中截取子区域NV21图像
Input: 
  @pNv21Source:  原始NV21图像指针，待裁剪图像，rk-3399上为1920*1080
  @nWidth：原始NV21图像宽
  @nHeight：原始NV21图像高
  @pNv21Dest： 裁剪所得NV21图像指针，本例中为人脸框区域
  @nClipLeft： x
  @nClipTop: y
  @nClipWidth:   cropNV21图像的Width
  @nClipHeight:  cropNV21图像的Height

*/
void cropNV21(const char* pNv21Source,  const int nWidth, const int nHeight,
    char* pNv21Dest,  const int nClipLeft, const int nClipTop, const int nClipWidth, const int nClipHeight)
{
    const char* pNv21Source0 = pNv21Source;
    int i = 0;
 
    //取整。估计不同平台要求取整范围有差异。
    //有可能差一个像素。宽高最好对应调整。
    int clipLeft = (int)(nClipLeft+1)  / 2 * 2;
    int clipTop  = (int)(nClipTop +1)  / 2 * 2;
 
    //移动到指定位置
    pNv21Source0 += clipTop * nWidth + clipLeft;
 
    //复制Y
    for (i=0; i<nClipHeight; i++)
    {
        memcpy(pNv21Dest, pNv21Source0, nClipWidth);
        pNv21Source0 += nWidth;
        pNv21Dest    += nClipWidth;
    }
 
    //复制U/V
    pNv21Source0  = pNv21Source + nWidth*nHeight;
    pNv21Source0 += (clipTop * nWidth/2 + clipLeft);
    
    //关键二之二：
    for (i=0; i<nClipHeight/2; i++)
    {
        memcpy(pNv21Dest, pNv21Source0, nClipWidth);
        pNv21Source0 += nWidth;
        pNv21Dest    += nClipWidth;
    }
    
}
