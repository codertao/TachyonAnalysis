
undefined4 FUN_004930e0(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return 0x1e;
  }
  if (*param_1 == 0) {
    return 0x1e;
  }
  return *(undefined4 *)(*param_1 + 0x4c);
}

