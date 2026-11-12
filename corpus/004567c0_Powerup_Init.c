
/* sweep */

void Powerup_Init(int param_1)

{
  Model_SelectState(param_1 + 0x18,0);
  SectorMap_LinkStatic(param_1,*(int *)(param_1 + 100) + 0x14);
  *(undefined4 *)(param_1 + 0xb8) = 0x28000;
  return;
}

