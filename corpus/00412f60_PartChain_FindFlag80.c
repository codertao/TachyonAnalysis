
/* sweep */

int PartChain_FindFlag80(int param_1)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((*(byte *)(*(int *)(param_1 + 0xe4) + 0x34) & 0x80) != 0) break;
    param_1 = *(int *)(param_1 + 0xe0);
  }
  return param_1;
}

