
/* sweep */

void DM_OnPlayerReset(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 200) != 0) {
    clr_bytes(*(int *)(param_1 + 200) + 0xe0,0x28);
  }
  DM_RespawnPlayer(param_1,param_2);
  return;
}

