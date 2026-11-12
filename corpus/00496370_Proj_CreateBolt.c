
/* def+0x70: pool by flag 1 (server 0x58b03c / client 0x5b32b0), +0xd8 = 1 client-owned, +0xc3 = 1
   (not in snapshots), +0xd4 life = def+0x3c, +0xf0 dmg scale */

int Proj_CreateBolt(int *param_1)

{
  int iVar1;
  int iVar2;
  Pool *pPVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar4 = &DAT_005b31c0;
    pPVar3 = (Pool *)&DAT_005b32b0;
  }
  else {
    puVar4 = *(undefined4 **)(param_1[1] + 100);
    pPVar3 = &g_PoolCommon;
  }
  iVar2 = DcbPool_Alloc(pPVar3,3,puVar4);
  if (iVar2 == 0) {
    return 0;
  }
  Quad_Link(iVar2);
  *(undefined4 *)(iVar2 + 0x114) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = DAT_00565798;
  *(undefined2 *)(iVar2 + 0x74) = 2;
  *(undefined4 *)(iVar2 + 0x58) = **(undefined4 **)(iVar1 + 0x74);
  *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar1 + 0x94);
  puVar4 = (undefined4 *)param_1[2];
  *(undefined4 *)(iVar2 + 0x34) = *puVar4;
  *(undefined4 *)(iVar2 + 0x38) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x3c) = puVar4[2];
  puVar4 = (undefined4 *)param_1[3];
  *(undefined4 *)(iVar2 + 0x4c) = *puVar4;
  *(undefined4 *)(iVar2 + 0x50) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x54) = puVar4[2];
  *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined2 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar1 + 0x90);
  if (param_1[1] != 0) {
    *(undefined1 *)(iVar2 + 0xc2) = *(undefined1 *)(param_1[1] + 0xc2);
  }
  Model_SelectState((undefined4 *)(iVar2 + 0x18),0);
  *(undefined1 *)(iVar2 + 0xc3) = 1;
  *(int *)(iVar2 + 0xd0) = DAT_00565460;
  DAT_00565460 = DAT_00565460 + 1;
  *(int *)(iVar2 + 0xdc) = iVar1;
  *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar1 + 0x3c);
  *(int *)(iVar2 + 200) = param_1[1];
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(int *)(iVar2 + 0xf0) = param_1[9];
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined4 *)(iVar2 + 0xd8) = 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0xd8) = 0;
  }
  if ((*(byte *)(iVar1 + 0xd8) & 2) == 0) {
    Proj_Launch(iVar2,param_1[3],param_1[5],param_1[6]);
  }
  return iVar2;
}

