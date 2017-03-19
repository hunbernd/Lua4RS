#include "interface.h"
interface* interface::instance;

const RsPlugInInterfaces& interface::get() {
    return (instance->interfaces);
}

void interface::init(const RsPlugInInterfaces& interfaces) {
    instance = new interface(interfaces);
}

interface::interface(RsPlugInInterfaces interfaces) : interfaces(std::move(interfaces)) {

}
