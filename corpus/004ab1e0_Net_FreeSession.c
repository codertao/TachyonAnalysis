
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Net_FreeSession(int *param_1)

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
    Mem_FreeTemp(param_1);
    Net_CountSessions();
    _DAT_0055e3f4 = 1;
  }
  return;
}

