
/* refine: per-vertex diffuse byte +0xc = clamp(N.L>>9,0,127); +0xd/e/f = (N.H)^1/^2/^4 for specular
   power 1/2/3; installed via fn ptr DAT_0055ed18 */

void Light_ComputeVertDots(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_2 + 0x48);
  uVar4 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    do {
      iVar1 = Vec_DotFixed14(&DAT_00668f3c,iVar3);
      iVar1 = iVar1 >> 9;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0x7f < iVar1) {
        iVar1 = 0x7f;
      }
      *(char *)(iVar3 + 0xc) = (char)iVar1;
      iVar1 = Vec_DotFixed14(&DAT_00668f48,iVar3);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      iVar2 = (iVar1 >> 8) * (iVar1 >> 8);
      *(char *)(iVar3 + 0xd) = (char)(iVar1 >> 9);
      iVar1 = iVar2 >> 8;
      *(char *)(iVar3 + 0xe) = (char)(iVar2 >> 9);
      *(char *)(iVar3 + 0xf) = (char)(iVar1 * iVar1 >> 9);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < *(uint *)(param_2 + 0x30));
  }
  return;
}

