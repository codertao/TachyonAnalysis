
/* sweep: 0x80-stride part array, flags +0x34 */

uint PartList_FindFlag(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if ((*(uint *)(uVar1 + 0x34) & param_2) != 0) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0x80;
    } while (uVar2 < *param_1);
  }
  return 0;
}

