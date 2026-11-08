
void FUN_004e61dc(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  undefined1 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 0x18) = 2;
  if (*(int *)(unaff_EDI + 4) == 0) {
    uVar1 = mem_GetMemEx_probably_alloc(0x800,4,0,s_font_entry_table_004e6203);
    *(undefined4 *)(unaff_EDI + 4) = uVar1;
    puVar3 = *(undefined1 **)(unaff_EDI + 4);
    for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_004e60da();
  return;
}

