
int FUN_0040b260(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(*(int *)(param_1 + 0xd4) + 0x44) == param_2))
    break;
    param_1 = *(int *)(param_1 + 0xe0);
  }
  return param_1;
}

