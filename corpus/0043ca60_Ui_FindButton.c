
/* find button def by name [inferred from Ui_SetButtonFlag] */

void Ui_FindButton(int param_1,undefined4 param_2)

{
  _bsearch(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x4c),0x23c,
           &LAB_004397a0);
  return;
}

