
/* sweep */

int PartChain_FindFlag(int param_1,uint param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((*(uint *)(*(int *)(param_1 + 0xd4) + 0x34) & param_2) != 0) break;
    param_1 = *(int *)(param_1 + 0xe0);
  }
  return param_1;
}

