// Add your JavaScript code here

// Example code to dynamically load content based on button click
document.getElementById('menuManagementBtn').addEventListener('click', function() {
  loadContent('menu-management.html');
});

document.getElementById('orderProcessingBtn').addEventListener('click', function() {
  loadContent('order-processing.html');
});

document.getElementById('billingBtn').addEventListener('click', function() {
  loadContent('billing.html');
});

document.getElementById('customerManagementBtn').addEventListener('click', function() {
  loadContent('customer-management.html');
});

document.getElementById('reportingBtn').addEventListener('click', function() {
  loadContent('reporting.html');
});

function loadContent(url) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById('mainContent').innerHTML = this.responseText;
    }
  };
  xhttp.open('GET', url, true);
  xhttp.send();
}

