#pragma once

#include <map>
#include <string>

#include "Product.h"

class PriceBase{
public:
    PriceBase(const PriceBase&) = delete;
    PriceBase& operator = (const PriceBase&)= delete;
    static PriceBase& Instance(){
        static PriceBase instance;
        return instance;
    }
      const WeightProduct& get_product_weight_price(const std::string&  name) const{
        return m_products_weight_price.at(name);
    }
      const AmountProduct& get_product_amount_price(const std::string&  name) const{
        return m_products_amount_price.at(name);
    }
protected:
    PriceBase() = default;
private:
    std::map<std::string, ProductInfo> m_products_info = {
            {"Apple", ProductInfo("Green sweet apple")},
            {"Nuts", ProductInfo("Macadama nut")},
            {"Pencil", ProductInfo("Red pencil with rubber")},
            {"Chair", ProductInfo("Wooden chair with armrests")}
    };
    std::map<std::string, WeightProduct> m_products_weight_price = {
            {"Apple", WeightProduct(m_products_info.at("Apple"), 11.3)},
            {"Nuts", WeightProduct(m_products_info.at("Nuts"), 34.2)},
    };
    std::map<std::string, AmountProduct> m_products_amount_price = {
            {"Pencil", AmountProduct(m_products_info.at("Pencil"), 5.7)},
            {"Chair", AmountProduct(m_products_info.at("Chair"), 75)}
    };
};