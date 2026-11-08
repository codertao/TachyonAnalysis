
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046f4c0(void)

{
  int iVar1;
  
  clr_bytes(&DAT_00587900,0x90);
  FUN_0046f390(0);
  _DAT_0058794c = load_box_file(s_borders_box_0053365c,0xa100);
  FUN_004ade60(s_shdw_10_pcx_00534eb0,&DAT_00587958,0x20000,0xa100);
  iVar1 = FUN_0043ba90(&GLBL_UI_ELEM_LIST,s_SMALL320_0054b0a8);
  _DAT_00587954 = *(undefined4 *)(iVar1 + 0x238);
  FUN_00437b40(&LAB_0046f4a0);
  FUN_00437b50(&LAB_0046f4b0);
  FUN_00437b70(&LAB_0046f480);
  FUN_00437b60(&LAB_0046f490);
  return;
}

