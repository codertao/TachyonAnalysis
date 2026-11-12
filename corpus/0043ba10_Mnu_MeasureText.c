
/* sweep */

void Mnu_MeasureText(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = Mnu_FindFont(param_1,param_2);
    if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x238), iVar1 != 0)) {
      if (param_4 != (undefined4 *)0x0) {
        uVar3 = Text_MeasureWidth(param_3,iVar1,0,iVar2 + 0x23c);
        *param_4 = uVar3;
      }
      if (param_5 != (undefined4 *)0x0) {
        uVar3 = Text_GlyphHeight(param_3,iVar1,0,iVar2 + 0x23c);
        *param_5 = uVar3;
      }
    }
  }
  return;
}

