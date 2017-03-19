//Imported from FriendMap plugin

#ifndef INTERFACE_H
#define INTERFACE_H

#include <retroshare/rsplugin.h>

class interface {
	friend class Lua4RSPlugin;

   public:
    static const RsPlugInInterfaces& get();

   private:
    static void init(const RsPlugInInterfaces& interfaces);
    explicit interface(RsPlugInInterfaces  interfaces);
    const RsPlugInInterfaces interfaces;
    static interface* instance;
};

#endif  // INTERFACE_H
