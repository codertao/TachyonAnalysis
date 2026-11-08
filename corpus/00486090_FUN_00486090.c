
void FUN_00486090(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  call_math_todo_with_rotation(&DAT_005b9628,0,0,0);
  FUN_004b1940(&DAT_0056e3ac,&DAT_0056e3c4);
  set_global_near_far(0xa000,0x2ee0000);
  FUN_004b19a0(&DAT_0056e340);
  FUN_004b19f0(&DAT_0056e340);
  puVar2 = &DAT_00587b7c;
  iVar1 = 5;
  do {
    if (puVar2[-0x46] != 0) {
      FUN_004b19a0(puVar2 + 0x14);
      FUN_004b19f0(puVar2 + 0x14);
      FUN_004b19a0(puVar2);
      FUN_004b1ab0(puVar2,DAT_00564ae4 == 0);
    }
    puVar2 = puVar2 + 0x6d;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  set_global_near_far(0x2000,0x13880000);
  return;
}

