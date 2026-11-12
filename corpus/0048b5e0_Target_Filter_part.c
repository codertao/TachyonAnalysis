
/* sweep: mis-split */

int Target_Filter_part(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = *(int *)(iVar1 + 0x94);
  } while (*(int *)(iVar1 + 0x94) != 0);
  return iVar1;
}

