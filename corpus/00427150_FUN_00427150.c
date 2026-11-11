
void FUN_00427150(void)

{
  SpED *pSVar1;
  SpED *ent;
  
  pSVar1 = DAT_005b31c0;
  while (ent = pSVar1, ent != (SpED *)0x0) {
    pSVar1 = ent->next;
    if (ent->poolType == 10) {
      FUN_00465ff0(*(undefined4 *)&ent->field_0xc8);
      *(undefined4 *)&ent->field_0xc8 = 0;
      Quad_UnlinkDynamic(ent);
      FUN_0041b9b0(ent);
    }
  }
  return;
}

