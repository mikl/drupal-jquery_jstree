
$Id$

//DEPENDENCIES
  Jquery 1.4.2 Learn to install http://dominiquedecooman.com/blog/drupal-install-jquery142

//INSTALL
  
  Download the jstree plugin http://www.jstree.com/
  Extract the contents of the folder into [sites/all/modules/contrib]/jquery_jstree/jquery
  Enable module</li>
  To include the plugin on call jquery_jstree_plugin_add() or jq_add('jstree') when using jq module;
  To add a tree format like this for example (for more read jstree docs): 
  
  Drupal.behaviors.ews_gestconf_services = function (context) {
    $(function () {
    
      
      $("#servicesgestconf").jstree({ 
        "json_data" : {
          "data" : [
            { 
              "data" : "A node", 
              "children" : [ "Child 1", "Child 2" ]
            },
            { 
              "attr" : { "id" : "li.node.id" }, 
              "data" : { 
                "title" : "Long format demo", 
                "attr" : { "href" : "#" } 
              } 
            }
          ]
        },
        "themes" : {"theme" : "default",
              "url" : "sites/all/modules/custom/jquery_jstree/jquery/themes/default/style.css"
        },
        
        "plugins" : [ "themes", "json_data" ]
      });
    
      
      
    });
    
  }

  The url is very important, jstree doesnt correctly add the path to the ccs file. You could create a js var and add it with drupal_add_js instead of hardcoding the path like in the example.

//INTEGRATION
  
  This module integrates with http://drupl.org/project/jq
