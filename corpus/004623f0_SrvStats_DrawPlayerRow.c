
/* sweep */

void SrvStats_DrawPlayerRow(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_40 [64];
  
  iVar4 = param_2;
  bVar1 = *(byte *)(*DAT_0058b07c + 4);
  if (param_3 != 0) {
    piVar3 = param_4 + 0x33;
    param_2 = param_3;
    do {
      param_5 = param_5 + 1;
      if (*param_4 == 0) {
        str_sprintf(local_40,s__3d__________00549530,param_5);
        uVar2 = 0xc4c4c4;
      }
      else {
        str_sprintf(local_40,s__3d__s_00549540,param_5,piVar3);
        uVar2 = 0xffff40;
      }
      Text_DrawAligned(local_40,DAT_0058b07c,param_1,iVar4,uVar2,0xffff,0x10000,0);
      param_4 = param_4 + 0x82;
      iVar4 = iVar4 + (bVar1 - 1);
      piVar3 = piVar3 + 0x82;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

