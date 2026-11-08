
/* client capship part replica: +0x80 = Replica_ReportHit / CapPartReplica_ReportHit */

void CapPartReplica_Init(int param_1,int param_2)

{
  *(int *)(param_1 + 0xd4) = param_2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  *(code **)(param_1 + 0x80) = Replica_ReportHit;
  *(undefined2 *)(param_1 + 0x76) = 0xc;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
  Model_SelectState((uint *)(param_1 + 0x18),0);
  if ((*(byte *)(param_2 + 0x34) & 0x20) == 0) {
    *(undefined2 *)(param_1 + 0x74) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x74) = 2;
  }
  if ((*(uint *)(param_2 + 0x34) & 0x6918) == 0) {
    *(code **)(param_1 + 0x80) = Replica_ReportHit;
  }
  else {
    *(code **)(param_1 + 0x80) = CapPartReplica_ReportHit;
    *(code **)(param_1 + 0x70) = FUN_0040ac80;
  }
  if ((*(uint *)(param_2 + 0x34) & 0x280) != 0) {
    *(code **)(param_1 + 0x68) = FUN_0040add0;
  }
  if ((*(byte *)(param_2 + 0x34) & 1) != 0) {
    if (DAT_005b3318 == 0) {
      FUN_0040adf0(param_1,param_2);
    }
    if (DAT_005b332c == 0) {
      DAT_005b3330 = 100;
      DAT_005b332c = 1;
    }
  }
  if ((*(uint *)(param_2 + 0x34) & 6) == 0) {
    if ((*(uint *)(param_2 + 0x34) & 0x118) == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0x14000;
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x5c) = &LAB_00411f10;
    *(int *)(param_1 + 0x60) = param_1;
  }
  FUN_0045cda0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_0040ab80(param_1,param_2);
  return;
}

