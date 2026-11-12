
/* sweep: guess */

void Ui_DrawWindowImageAreas2(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        iVar2 = __stricmp(param_2,iVar4 + 0x40);
        if (iVar2 == 0) {
          if ((*(byte *)(iVar1 + 0xf0) & 2) != 0) goto LAB_0043f44c;
        }
        else if ((*(uint *)(iVar4 + 0x10c) & 0x40000) != 0) {
LAB_0043f44c:
          if ((*(byte *)(iVar1 + 0xf0) & 4) != 0) {
            *(uint *)(iVar4 + 0x10c) = *(uint *)(iVar4 + 0x10c) | 0x400;
          }
          if ((*(int *)(iVar4 + 0xd4) != 0) && ((*(uint *)(iVar4 + 0x10c) & 0x400) != 0)) {
            ImageArea_Draw(param_1,iVar4,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48)
                           ,iVar1);
          }
          if ((*(uint *)(iVar4 + 0x10c) & 0x80000) != 0) {
            *(uint *)(iVar4 + 0x10c) = *(uint *)(iVar4 + 0x10c) | 0x400;
          }
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x130;
      } while (uVar3 < *(uint *)(param_1 + 0x48));
    }
  }
  return;
}

