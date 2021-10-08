import sys
import os
sys.path.append(os.getcwd())

# Import MobileInventory class and InsufficientException from the inventory module using the expression
from proj.inventory import MobileInventory, InsufficientException
# Import pytest using the expression
import pytest
# Use assert statement for assert, and to check. Ex: assert 1 == 1


# Define a pytest test class **'TestingInventoryCreation'**
class TestingInventoryCreation:

    def test_creating_empty_inventory(self):
        c1 = MobileInventory()
        assert c1.balance_inventory == {}

    def test_creating_specified_inventory(self):
        c1 = MobileInventory({'iPhone Model X':100, 'Xiaomi Model Y': 1000, 'Nokia Model Z':25})
        assert self.c1.balance_inventory == {'iPhone Model X':100, 'Xiaomi Model Y': 1000, 'Nokia Model Z':25}
    #{'iPhone Model X':100, 'Xiaomi Model Y': 1000, 'Nokia Model Z':25}

    def test_creating_inventory_with_list(self):
    #c3 = MobileInventory(['iPhone Model X', 'Xiaomi Model Y', 'Nokia Model Z'])
        with pytest.raises(TypeError) as exc_info :
            c3 = MobileInventory(['iPhone Model X', 'Xiaomi Model Y', 'Nokia Model Z'])
        assert "Input inventory must be a dictionary" == str(exc_info.value)

    def test_creating_inventory_with_numeric_keys(self):
    #c4 = MobileInventory({1:'iPhone Model X', 2:'Xiaomi Model Y', 3:'Nokia Model Z'})
        with pytest.raises(ValueError) as exc_info:
            c4 = MobileInventory({1:'iPhone Model X', 2:'Xiaomi Model Y', 3:'Nokia Model Z'})
        assert "Mobile model name must be a string" == str(exc_info.value)

    def test_creating_inventory_with_nonnumeric_values(self):
    #c5 = MobileInventory({'iPhone Model X':'100', 'Xiaomi Model Y': '1000', 'Nokia Model Z':'25'})
        with pytest.raises(ValueError) as exc_info:
            c5 = MobileInventory({'iPhone Model X':'100', 'Xiaomi Model Y': '1000', 'Nokia Model Z':'25'})
        assert "No. of mobiles must be a positive integer" == str(exc_info.value)

    def test_creating_inventory_with_negative_value(self):
    #c6 = MobileInventory({'iPhone Model X':-45, 'Xiaomi Model Y': 200, 'Nokia Model Z':25})
        with pytest.raises(ValueError) as exc_info :
            c6 = MobileInventory({'iPhone Model X':-45, 'Xiaomi Model Y': 200, 'Nokia Model Z':25})
        assert "No. of mobiles must be a positive integer" == str(exc_info.value)
# Define another pytest test class **'TestInventoryAddStock'**, which tests the behavior of the **'add_stock'** method, with the following tests
class TestInventoryAddStock:
    #inventory=None
    @classmethod
    def setup_class(cls):
        cls.inventory = MobileInventory({'iPhone Model X': 100, 'Xiaomi Model Y': 1000, 'Nokia Model Z':25})

    def test_add_new_stock_as_dict(self):
        self.inventory.add_stock({'iPhone Model X': 50, 'Xiaomi Model Y': 2000, 'Nokia Model A': 10})
        assert self.inventory.balance_inventory == {'iPhone Model X': 150, 'Xiaomi Model Y': 3000, 'Nokia Model Z': 25, 'Nokia Model A': 10}


    def test_add_new_stock_as_list(self):
        with pytest.raises(TypeError) as exc_info :
            assert MobileInventory.add_stock(['iPhone Model X', 'Xiaomi Model Y', 'Nokia Model Z'])
        assert "Input stock must be a dictionary" == str(exc_info.value)

    def test_add_new_stock_with_numeric_keys(self):
        with pytest.raises(ValueError) as exc_info:
            MobileInventory.add_stock({1:'iPhone Model A', 2:'Xiaomi Model B', 3:'Nokia Model C'})
        assert "Mobile model name must be a string" == str(exc_info.value)

    def test_add_new_stock_with_nonnumeric_values(self):
        with pytest.raises(ValueError) as exc_info:
            MobileInventory.add_stock({'iPhone Model A':'50', 'Xiaomi Model B': '2000', 'Nokia ModelC':'25'})
        assert "No. of mobiles must be a positive integer" == str(exc_info.value)


    def test_add_new_stock_with_float_values(self):
        with pytest.raises(ValueError) as exc_info:
            MobileInventory.add_stock({'iPhone Model A':50.5, 'Xiaomi Model B':2000.3, 'Nokia Model C':25})
        assert "No. of mobiles must be a positive integer" == str(exc_info.value)


# Define another pytest test class **'TestInventorySellStock'**, which tests the behavior of the **'sell_stock'** method, with the following tests
class TestInventorySellStock:
    #inventory=None
    @classmethod

    def setup_class(cls):
        cls.inventory = MobileInventory(
            {'iPhone Model A': 50, 'Xiaomi Model B': 2000, 'Nokia Model C': 10, 'Sony Model D': 1})

    def test_sell_stock_as_dict(self):
        self.inventory.sell_stock({'iPhone Model A': 2, 'Xiaomi Model B': 20, 'Sony Model D': 1})
        assert self.inventory.balance_inventory == {'iPhone Model A': 48, 'Xiaomi Model B': 1980, 'Nokia Model C': 10,
                                                'Sony Model D': 0}

    def test_sell_stock_as_list(self):
        with pytest.raises(TypeError) as exc_info:
            MobileInventory.sell_stock(['iPhone Model A', 'Xiaomi Model B', 'Nokia Model C'])
        assert "Requested stock must be a dictionary" == str(exc_info.value)


    def test_sell_stock_with_numeric_keys(self):
        with pytest.raises(ValueError) as exc_info:
            MobileInventory.sell_stock({1: 'iPhone Model A', 2: 'Xiaomi Model B', 3: 'Nokia Model C'})
        assert "Mobile model name must be a string"== str(exc_info.value)

    def test_sell_stock_with_nonnumeric_values(self):
        with pytest.raises(ValueError) as exc_info:
            MobileInventory.sell_stock({'iPhone Model A': '5', 'Xiaomi Model B': '3', 'Nokia Model C': '4'})
        assert "No. of mobiles must be a positive integer" == str(exc_info.value)

    def test_sell_stock_with_float_values(self):
        with pytest.raises(ValueError) as exc_info:
            MobileInventory.sell_stock({'iPhone Model A': 2.5, 'Xiaomi Model B': 3.1, 'Nokia Model C': 4})
        assert "No. of mobiles must be a positive integer" == str(exc_info.value)

    def test_sell_stock_of_nonexisting_model(self):
        with pytest.raises(InsufficientException) as exc_info:
            MobileInventory.sell_stock({'iPhone Model B': 2, 'Xiaomi Model B': 5})
        assert "No Stock. New Model Request" == str(exc_info.value)


    def test_sell_stock_of_insufficient_stock(self):
        with pytest.raises(InsufficientException) as exc_info:
            MobileInventory.sell_stock({'iPhone Model A': 2, 'Xiaomi Model B': 5, 'Nokia Model C': 15})
        assert "Insufficient Stock" == str(exc_info.value)

