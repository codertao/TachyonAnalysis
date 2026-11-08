
undefined4 * FUN_004b1450(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_004b0ac0(param_1);
  puVar2 = (undefined4 *)FUN_0049c500(uVar1,4,0,0,DAT_00668f58);
  puVar4 = puVar2;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_0049c840(puVar2,puVar2 + 0x1c);
  Model_CloneFromPak(puVar2,param_1);
  return puVar2;
}

