
/* sweep */

void Starbase_ThrottledNotify(int param_1)

{
  if (((DAT_005b9024 != 0) && (*(char *)(param_1 + 0xc2) == '\x01')) &&
     (DAT_005b39b4 <= DAT_005b3304)) {
    DAT_005b39b4 = DAT_005b3304 + 0xfa;
    if (*(int *)(param_1 + 0xdc) != 0) {
      NetCli_SendRulesEvent(*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xe8));
      return;
    }
    NetCli_SendRulesEvent(*(undefined4 *)(param_1 + 0xe8));
  }
  return;
}

