
/* sweep */

void Spark_SpawnAt(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DcbPool_AllocTyped(&DAT_005b32b0,7,&DAT_005b31c0);
  if (iVar2 != 0) {
    Quad_Link(iVar2);
    *(undefined2 *)(iVar2 + 0x74) = 2;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
    *(undefined1 **)(iVar2 + 0x70) = &LAB_00421280;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x34) = *param_1;
    *(undefined4 *)(iVar2 + 0x38) = param_1[1];
    *(undefined4 *)(iVar2 + 0x3c) = param_1[2];
    *(undefined1 **)(iVar2 + 0x68) = &LAB_00420f90;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0x14;
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    *(undefined2 *)(iVar2 + 0x30) = 0;
    iVar3 = Model_GetRootMesh(param_2);
    iVar3 = *(int *)(iVar3 + 0x3c);
    *(undefined4 *)(iVar2 + 0x94) = 3;
    bVar1 = *(byte *)(iVar3 + 0x19);
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(uint *)(iVar2 + 0x8c) = (uint)bVar1 << 3;
    Snd_PlayAtEnt(2,2,1,iVar2,0x10000);
  }
  return;
}

