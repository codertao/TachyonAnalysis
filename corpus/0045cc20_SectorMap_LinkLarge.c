
/* sweep */

void SectorMap_LinkLarge(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)SectorMap_LargeCellPtr(param_1 + 0x34,param_2);
  *(int *)(param_1 + 0x9c) = *piVar1;
  *piVar1 = param_1;
  return;
}

