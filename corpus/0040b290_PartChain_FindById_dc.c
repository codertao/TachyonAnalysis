
/* sweep */

int PartChain_FindById_dc(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0xdc) + 0x44) == param_2) break;
    param_1 = *(int *)(param_1 + 0xe0);
  }
  return param_1;
}

