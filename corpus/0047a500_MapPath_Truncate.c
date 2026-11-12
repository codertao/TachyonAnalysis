
/* sweep: guess */

void MapPath_Truncate(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  while (param_2 < uVar1) {
    MapPath_Contains(param_1);
    uVar1 = *(uint *)(param_1 + 0x100);
  }
  return;
}

