
/* sweep */

void Hud_DrawTargetFrame(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = (longlong)((param_2 + param_4 >> 1) + DAT_005b0144) * (longlong)DAT_005a67e4;
  lVar2 = (longlong)((param_1 + param_3 >> 1) + DAT_005b0140) * (longlong)DAT_005a67e4;
  lVar3 = (longlong)(DAT_005b0140 + param_4) * (longlong)DAT_005a67e4;
  lVar4 = (longlong)(DAT_005b0140 + param_3) * (longlong)DAT_005a67e4;
  lVar5 = (longlong)(DAT_005b0144 + param_2) * (longlong)DAT_005a67e4;
  lVar6 = (longlong)(DAT_005b0140 + param_1) * (longlong)DAT_005a67e4;
  Rend_SetViewport((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10,
                   (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10,
                   (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10,
                   (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10,
                   (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10,
                   (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10,0x32,0);
  return;
}

