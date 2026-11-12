
/* refine: as Light_ComputeVertDots but diffuse scaled by lightning level DAT_00668f8c */

void Light_ComputeVertDotsLightning(undefined4 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_2 + 0x48);
  uVar6 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    do {
      iVar2 = Vec_DotFixed14(&DAT_00668f3c,iVar5);
      lVar1 = (longlong)(iVar2 >> 9) * (longlong)DAT_00668f8c;
      uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if (0x7f < (int)uVar3) {
        uVar3 = 0x7f;
      }
      *(char *)(iVar5 + 0xc) = (char)uVar3;
      iVar2 = Vec_DotFixed14(&DAT_00668f48,iVar5);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      iVar4 = (iVar2 >> 8) * (iVar2 >> 8);
      *(char *)(iVar5 + 0xd) = (char)(iVar2 >> 9);
      iVar2 = iVar4 >> 8;
      *(char *)(iVar5 + 0xe) = (char)(iVar4 >> 9);
      *(char *)(iVar5 + 0xf) = (char)(iVar2 * iVar2 >> 9);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar6 < *(uint *)(param_2 + 0x30));
  }
  return;
}

