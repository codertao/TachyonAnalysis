
/* refine: per-player 128-entry ring of event ids (+0x7c/+0x80) */

void NetSrv_RecordEventSeen(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(*(int *)(param_2 + 0x7c) + *(int *)(param_2 + 0x80) * 4) = param_1;
  uVar1 = *(int *)(param_2 + 0x80) + 1;
  *(uint *)(param_2 + 0x80) = uVar1;
  if (0x7f < uVar1) {
    *(undefined4 *)(param_2 + 0x80) = 0;
  }
  return;
}

