
undefined4 FUN_00401140(int param_1,int param_2,int param_3)

{
  if ((((param_3 == 0) || (*(char *)(param_3 + 0x1b) != '\x01')) && (*(int *)(param_2 + 0xd8) != 0))
     && (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_2 + 0xd8) + 0x20))) {
    return 1;
  }
  return 0;
}

