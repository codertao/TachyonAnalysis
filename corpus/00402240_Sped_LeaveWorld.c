
/* sweep */

void Sped_LeaveWorld(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xf8) == 0) {
    Ai_RejoinFormation(param_1);
  }
  Formation_Unlink(param_1,*(undefined4 *)(param_1 + 0xf8));
  uVar1 = Sped_GetSpx(param_1,*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x5c),param_1 + 0x10c);
  Sped_SaveAliasState(uVar1);
  Sped_Unregister(param_1,*(undefined4 *)(param_1 + 0xd8));
  return;
}

