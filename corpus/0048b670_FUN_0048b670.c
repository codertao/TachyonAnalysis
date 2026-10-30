
void FUN_0048b670(int param_1)

{
  param_1 = param_1 * 0x170;
  if (*(int *)(&DAT_0056abc4 + param_1) != 0) {
    FUN_0049c530(*(int *)(&DAT_0056abc4 + param_1));
    *(undefined4 *)(&DAT_0056abc4 + param_1) = 0;
  }
  if (*(int *)(&DAT_0056abc0 + param_1) != 0) {
    FUN_0049c530(*(int *)(&DAT_0056abc0 + param_1));
    *(undefined4 *)(&DAT_0056abc0 + param_1) = 0;
  }
  if (*(int *)(&DAT_0056ac30 + param_1) != 0) {
    FUN_0049c530(*(int *)(&DAT_0056ac30 + param_1));
    *(undefined4 *)(&DAT_0056ac30 + param_1) = 0;
  }
  if (*(int *)(&DAT_0056aba4 + param_1) != 0) {
    FUN_0049c530(*(int *)(&DAT_0056aba4 + param_1));
    *(undefined4 *)(&DAT_0056aba4 + param_1) = 0;
  }
  return;
}

