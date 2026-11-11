
void __cdecl Quad_UnlinkDynamic(SpED *ent)

{
  List_Remove(ent,&ent->quadrant->dynamicList);
  return;
}

