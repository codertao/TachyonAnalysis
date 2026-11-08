
/* asteroid +0x80 damage, +0x88 Ent_OnPlayerCollide */

void Asteroid_InitClient(int param_1,int param_2)

{
  *(code **)(param_1 + 0x80) = Asteroid_ReportHit;
  *(undefined1 **)(param_1 + 0x88) = &Ent_OnPlayerCollide;
  FUN_0045cda0(param_1,*(int *)(param_1 + 100) + 0x14);
  Model_SelectState(param_1 + 0x18,0);
  if (*(int *)(param_2 + 0xbc) != 0) {
    *(code **)(param_1 + 0x68) = FUN_00408020;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

