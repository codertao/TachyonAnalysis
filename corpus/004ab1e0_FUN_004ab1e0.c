
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab1e0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((int *)param_1[1] == (int *)0x0) {
      DAT_0055e3e8 = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    if (*param_1 == 0) {
      DAT_0055e3ec = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    DAT_0055e3f0 = DAT_0055e3f0 + -1;
    FUN_0049c810(param_1);
    thunk_FUN_004ab240();
    _DAT_0055e3f4 = 1;
  }
  return;
}

